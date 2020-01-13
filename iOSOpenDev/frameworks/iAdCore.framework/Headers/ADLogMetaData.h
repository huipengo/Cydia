/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

#import <iAdCore/XXUnknownSuperclass.h>
#import <iAdCore/ADLogMetaData.h>

@class ADTimeStamp, NSString, NSData;

@interface ADLogMetaData : XXUnknownSuperclass {
	NSString *_batchId;	// 4 = 0x4
	BOOL _hasMessageSequence;	// 8 = 0x8
	int _messageSequence;	// 12 = 0xc
	NSData *_impressionIdentifierData;	// 16 = 0x10
	BOOL _hasImpressionSequence;	// 20 = 0x14
	int _impressionSequence;	// 24 = 0x18
	BOOL _hasOverclickCount;	// 28 = 0x1c
	int _overclickCount;	// 32 = 0x20
	ADTimeStamp *_timeStamp;	// 36 = 0x24
	int _orientation;	// 40 = 0x28
	BOOL _hasConnectionType;	// 44 = 0x2c
	int _connectionType;	// 48 = 0x30
}
@property(assign, nonatomic) int connectionType;	// G=0x17b75; S=0x172d9; @synthesize=_connectionType
@property(assign, nonatomic) BOOL hasConnectionType;	// G=0x17b55; S=0x17b65; @synthesize=_hasConnectionType
@property(assign, nonatomic) int orientation;	// G=0x17b35; S=0x17b45; @synthesize=_orientation
@property(retain, nonatomic) ADTimeStamp *timeStamp;	// G=0x17b01; S=0x17b11; @synthesize=_timeStamp
@property(readonly, assign, nonatomic) BOOL hasTimeStamp;	// G=0x172c1; 
@property(assign, nonatomic) int overclickCount;	// G=0x17af1; S=0x1729d; @synthesize=_overclickCount
@property(assign, nonatomic) BOOL hasOverclickCount;	// G=0x17ad1; S=0x17ae1; @synthesize=_hasOverclickCount
@property(assign, nonatomic) int impressionSequence;	// G=0x17ac1; S=0x17279; @synthesize=_impressionSequence
@property(assign, nonatomic) BOOL hasImpressionSequence;	// G=0x17aa1; S=0x17ab1; @synthesize=_hasImpressionSequence
@property(retain, nonatomic) NSData *impressionIdentifierData;	// G=0x17a6d; S=0x17a7d; @synthesize=_impressionIdentifierData
@property(readonly, assign, nonatomic) BOOL hasImpressionIdentifierData;	// G=0x17261; 
@property(assign, nonatomic) int messageSequence;	// G=0x17a5d; S=0x1723d; @synthesize=_messageSequence
@property(assign, nonatomic) BOOL hasMessageSequence;	// G=0x17a3d; S=0x17a4d; @synthesize=_hasMessageSequence
@property(retain, nonatomic) NSString *batchId;	// G=0x17a09; S=0x17a19; @synthesize=_batchId
@property(readonly, assign, nonatomic) BOOL hasBatchId;	// G=0x17225; 
// declared property getter: - (int)connectionType;	// 0x17b75
// declared property setter: - (void)setHasConnectionType:(BOOL)type;	// 0x17b65
// declared property getter: - (BOOL)hasConnectionType;	// 0x17b55
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x17b45
// declared property getter: - (int)orientation;	// 0x17b35
// declared property setter: - (void)setTimeStamp:(id)stamp;	// 0x17b11
// declared property getter: - (id)timeStamp;	// 0x17b01
// declared property getter: - (int)overclickCount;	// 0x17af1
// declared property setter: - (void)setHasOverclickCount:(BOOL)count;	// 0x17ae1
// declared property getter: - (BOOL)hasOverclickCount;	// 0x17ad1
// declared property getter: - (int)impressionSequence;	// 0x17ac1
// declared property setter: - (void)setHasImpressionSequence:(BOOL)sequence;	// 0x17ab1
// declared property getter: - (BOOL)hasImpressionSequence;	// 0x17aa1
// declared property setter: - (void)setImpressionIdentifierData:(id)data;	// 0x17a7d
// declared property getter: - (id)impressionIdentifierData;	// 0x17a6d
// declared property getter: - (int)messageSequence;	// 0x17a5d
// declared property setter: - (void)setHasMessageSequence:(BOOL)sequence;	// 0x17a4d
// declared property getter: - (BOOL)hasMessageSequence;	// 0x17a3d
// declared property setter: - (void)setBatchId:(id)anId;	// 0x17a19
// declared property getter: - (id)batchId;	// 0x17a09
- (void)writeTo:(id)to;	// 0x17839
- (BOOL)readFrom:(id)from;	// 0x175c5
- (id)dictionaryRepresentation;	// 0x1736d
- (id)description;	// 0x172fd
// declared property setter: - (void)setConnectionType:(int)type;	// 0x172d9
// declared property getter: - (BOOL)hasTimeStamp;	// 0x172c1
// declared property setter: - (void)setOverclickCount:(int)count;	// 0x1729d
// declared property setter: - (void)setImpressionSequence:(int)sequence;	// 0x17279
// declared property getter: - (BOOL)hasImpressionIdentifierData;	// 0x17261
// declared property setter: - (void)setMessageSequence:(int)sequence;	// 0x1723d
// declared property getter: - (BOOL)hasBatchId;	// 0x17225
- (void)dealloc;	// 0x171b9
@end

@interface ADLogMetaData (Convenience)
+ (id)metadataForAd:(id)ad impressionSequence:(unsigned)sequence overclickCount:(unsigned)count;	// 0x8a85
@end

@interface ADLogMetaData (Swizzle)
+ (void)initialize;	// 0x9041
@end