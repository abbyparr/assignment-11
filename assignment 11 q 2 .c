#pseudocode: proteinmaker() *
#input: dna sequence *
#compose dictionary of codons *
#slide down dna sequence in steps of three *
#translate codon to amino acid *
#add amino acids together *
#stop if you meet a stop codon *
#return polypeptide sequence *

#put sequence first, and then the letter

def proteinmaker(codon_dictionary, x):

    x = input('what is the DNA sequence?')
codon_dictionary = {'Ala':'', 'Ile':'', 'Arg':'', 'Leu':'', 'Asn':'', 'Lys':'', 'Asp':'', 'Met':'', 'Phe':'', 'Cys':'', 'Pro':'', 'Gln':'', 'Ser':'', 'Glu':'', 'Thr':'', 'Trp':'', 'Gly':'', 'Tyr':'', 'His':'', 'Val':'', 'START':'', 'STOP':'' }

for x in codon_dictionary:

    Ala == ['GCT', 'GCC', 'GCA', 'GCG']
Ile ==	['ATT', 'ATC', 'ATA']
Arg == ['CGT', 'CGC', 'CGA', 'CGG', 'AGA', 'AGG', 'CGN', 'AGR', 'CGY']
Leu == ['CTT', 'CTC', 'CTA', 'CTG', 'TTA', 'TTG']
Asn == ['AAT', 'AAC']
Lys == ['AAA', 'AAG']
Asp == ['GAT', 'GAC']
Met == ['ATG']
Asp == ['AAT', 'AAC', 'GAT', 'GAC']
Phe == ['TTT', 'TTC']
Cys == ['TGT', 'TGC']	
Pro == ['CCT', 'CCC', 'CCA', 'CCG']
Gln == ['CAA', 'CAG']	
Ser == ['TCT', 'TCC', 'TCA', 'TCG', 'AGT', 'AGC']
Glu == ['GAA', 'GAG']		
Thr == ['ACT', 'ACC', 'ACA', 'ACG']
Glu == ['CAA', 'CAG', 'GAA', 'GAG']
Trp == ['TGG']
Gly == ['GGT', 'GGC', 'GGA', 'GGG']
Tyr == ['TAT', 'TAC']	
His == ['CAT', 'CAC']		
Val == ['GTT', 'GTC', 'GTA', 'GTG']
START == ['ATG']	
STOP == ['TAA', 'TGA', 'TAG']

rna = ''
for x in codon_dictionary:
    if x == 'T':
        rna += 'U'
else:
    rna += x
    
    return rna

new = Ala + Ile + Arg + Leu + Asn + Lys + Asp + Met + Phe + Cys + Pro + Gln + Ser + Glu + Thr + Trp + Gly + Tyr + His + Val + START + STOP

for x in codon_dictionary:
    if x  == ('TAA', 'TAG', 'TGA'):
        print('you have met a stop codon. stop')

print(new)
print(rna)
