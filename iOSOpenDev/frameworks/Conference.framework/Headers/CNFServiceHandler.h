/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

#import <Conference/XXUnknownSuperclass.h>


@interface CNFServiceHandler : XXUnknownSuperclass {
}
+ (BOOL)_isValidProcess;	// 0x1aff5
+ (id)services;	// 0x1b0b9
+ (id)faceTimeSourceAccount;	// 0xaa5d
+ (BOOL)conferencingIsSupported;	// 0x1a05
+ (BOOL)conferencingIsRestricted;	// 0x1b085
+ (BOOL)isFaceTimeActivated;	// 0x25d9
+ (void)activateFaceTime;	// 0x1b6b5
+ (void)deactivateFaceTime;	// 0x1b4e5
+ (int)activationState;	// 0x1b10d
+ (unsigned long long)capabilities;	// 0x2355
+ (void)setCapabilities:(unsigned long long)capabilities;	// 0x2011
+ (BOOL)invitationListener;	// 0x2351
+ (void)updateConferenceCapabilitiesForControllerType:(int)controllerType;	// 0x1f81
+ (BOOL)conferencingIsRegisteredForAccount:(id)account;	// 0x2795
+ (BOOL)conferencingHasValidatedAliasForAccount:(id)account;	// 0x28c1
+ (BOOL)conferencingIsAvailable;	// 0x241d
+ (void)_accountRegistrationStatusChanged:(id)changed;	// 0x2465
+ (void)_availabilityChanged:(id)changed;	// 0x1b389
+ (void)_daemonConnectedNotification:(id)notification;	// 0x2515
+ (BOOL)connect:(BOOL)connect;	// 0x20a9
+ (BOOL)connect;	// 0x2091
+ (BOOL)isConnected;	// 0xc719
+ (BOOL)disconnect;	// 0x1b201
@end