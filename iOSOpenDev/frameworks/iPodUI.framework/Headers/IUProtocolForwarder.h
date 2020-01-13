/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>

@class Protocol;

@interface IUProtocolForwarder : XXUnknownSuperclass {
@private
	id _target;	// 4 = 0x4
	Protocol *_protocol;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) id target;	// G=0x77c9; 
- (void)forwardInvocation:(id)invocation;	// 0x791d
- (BOOL)respondsToSelector:(SEL)selector;	// 0x78c1
- (BOOL)_respondsToProtocolSelector:(SEL)protocolSelector;	// 0x783d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x77dd
// declared property getter: - (id)target;	// 0x77c9
- (void)dealloc;	// 0x7785
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x76ad
@end