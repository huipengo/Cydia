/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <iWorkImport/GQDTBooleanCell.h>
#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTNumberCell.h>


__attribute__((visibility("hidden")))
@interface GQDTBooleanCell : GQDTNumberCell {
@private
	CFBundleRef mProcessorBundle;	// 28 = 0x1c
}
- (BOOL)boolValue;	// 0x13721
- (CFStringRef)createStringValue;	// 0x138b1
@end

@interface GQDTBooleanCell (Private)
- (void)setProcessorBundle:(CFBundleRef)bundle;	// 0x13745
@end