/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */



@interface LBSFeatureId : PBCodable 
{
    unsigned long long _cell_id;
    unsigned long long _fprint;
}

@property unsigned long long fprint;
@property unsigned long long cell_id;


- (void)writeTo:(id)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)setFprint:(unsigned long long)arg1;
- (void)setCell_id:(unsigned long long)arg1;
- (unsigned long long)fprint;
- (unsigned long long)cell_id;

@end