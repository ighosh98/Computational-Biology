#Problem statement:Read a FASTA file and calculate the GC content
#Sequence Chosen : 
from Bio import SeqIO
def getGC(seq):
    return(str(float(((sum([1.0000 for nucl in seq if nucl in ['G', 'C']]) / len(seq)) * 100.000))))

def processFasta(fas):
    for record in SeqIO.parse(fas, "fasta"):
        print("identifier: {}\t GCcontent: {}%\t Length: {}".format(record.id, getGC(str(record.seq)), str(len(record.seq))))
    #prints out the GC content

filename = 'f2016b1a70938p.fasta'
processFasta(filename)