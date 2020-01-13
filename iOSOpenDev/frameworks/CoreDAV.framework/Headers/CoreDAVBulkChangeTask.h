/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAVTask.h>

@class NSData, NSString, NSDictionary, NSMutableSet, NSSet;

@interface CoreDAVBulkChangeTask : CoreDAVTask {
	NSString *_appSpecificNamespace;	// 120 = 0x78
	NSString *_appSpecificDataProp;	// 124 = 0x7c
	NSDictionary *_uuidsToAddActions;	// 128 = 0x80
	NSDictionary *_hrefsToModDeleteActions;	// 132 = 0x84
	NSString *_checkCTag;	// 136 = 0x88
	BOOL _simple;	// 140 = 0x8c
	BOOL _returnChangedData;	// 141 = 0x8d
	NSData *_pushedData;	// 144 = 0x90
	BOOL _validCTag;	// 148 = 0x94
	NSString *_nextCTag;	// 152 = 0x98
	NSMutableSet *_bulkChangeResponses;	// 156 = 0x9c
	NSString *_requestDataContentType;	// 160 = 0xa0
}
@property(readonly, assign) NSSet *bulkChangeResponses;	// G=0x37be1; @synthesize=_bulkChangeResponses
@property(readonly, assign) NSString *nextCTag;	// G=0x37bd1; @synthesize=_nextCTag
@property(readonly, assign) NSDictionary *hrefsToModDeleteActions;	// G=0x37bc1; @synthesize=_hrefsToModDeleteActions
@property(readonly, assign) NSDictionary *uuidsToAddActions;	// G=0x37bb1; @synthesize=_uuidsToAddActions
// declared property getter: - (id)bulkChangeResponses;	// 0x37be1
// declared property getter: - (id)nextCTag;	// 0x37bd1
// declared property getter: - (id)hrefsToModDeleteActions;	// 0x37bc1
// declared property getter: - (id)uuidsToAddActions;	// 0x37bb1
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x37511
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x37359
- (void)fillOutDataWithUUIDsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x36bc5
- (id)requestBody;	// 0x36bb5
- (id)httpMethod;	// 0x36ba9
- (id)additionalHeaderValues;	// 0x36a6d
- (void)dealloc;	// 0x36981
- (id)initWithURL:(id)url checkCTag:(id)tag simple:(BOOL)simple returnChangedData:(BOOL)data uuidsToAddActions:(id)addActions hrefsToModDeleteActions:(id)modDeleteActions;	// 0x36841
@end