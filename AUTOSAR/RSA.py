from Crypto.PublicKey import RSA
import asn1tools

# Generate an RSA key pair
key = RSA.generate(2048)

# Extract components of the key
modulus = key.n
public_exponent = key.e
private_exponent = key.d
prime1 = key.p
prime2 = key.q
exponent1 = key.d % (key.p - 1)
exponent2 = key.d % (key.q - 1)
coefficient = pow(key.q, -1, key.p)

# Create the ASN.1 structure for the private key
rsa_asn1_schema = '''
RSAPrivateKey DEFINITIONS ::= BEGIN
    RSAPrivateKey ::= SEQUENCE {
        version           INTEGER,
        modulus           INTEGER,
        publicExponent    INTEGER,
        privateExponent   INTEGER,
        prime1            INTEGER,
        prime2            INTEGER,
        exponent1         INTEGER,
        exponent2         INTEGER,
        coefficient       INTEGER
    }
END
'''

# Compile ASN.1 schema
asn1_compiler = asn1tools.compile_string(rsa_asn1_schema, 'der')

# Encode the RSA private key using ASN.1
private_key_der = asn1_compiler.encode('RSAPrivateKey', {
    'version': 0,
    'modulus': modulus,
    'publicExponent': public_exponent,
    'privateExponent': private_exponent,
    'prime1': prime1,
    'prime2': prime2,
    'exponent1': exponent1,
    'exponent2': exponent2,
    'coefficient': coefficient
})

# Save the private key in binary format
with open('rsa_private_key.der', 'wb') as f:
    f.write(private_key_der)

# Export public key
public_key_pem = key.publickey().export_key(format='PEM')
with open('rsa_public_key.pem', 'wb') as f:
    f.write(public_key_pem)

print("Keys generated successfully:")
print("- Private key saved as 'rsa_private_key.der'")
print("- Public key saved as 'rsa_public_key.pem'")