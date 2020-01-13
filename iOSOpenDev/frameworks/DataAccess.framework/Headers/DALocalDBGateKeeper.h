/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <DataAccess/XXUnknownSuperclass.h>

@class NSMutableSet, NSMutableArray;
@protocol DADataclassLockWatcher;

@interface DALocalDBGateKeeper : XXUnknownSuperclass {
	BOOL _claimedOwnershipOfContacts;	// 4 = 0x4
	id<DADataclassLockWatcher> _contactsLockHolder;	// 8 = 0x8
	NSMutableArray *_contactsWaiters;	// 12 = 0xc
	NSMutableSet *_waiterIDsExpectingContactsLock;	// 16 = 0x10
	BOOL _claimedOwnershipOfEvents;	// 20 = 0x14
	id<DADataclassLockWatcher> _eventsLockHolder;	// 24 = 0x18
	NSMutableArray *_eventsWaiters;	// 28 = 0x1c
	NSMutableSet *_waiterIDsExpectingEventsLock;	// 32 = 0x20
	BOOL _claimedOwnershipOfNotes;	// 36 = 0x24
	id<DADataclassLockWatcher> _notesLockHolder;	// 40 = 0x28
	NSMutableArray *_notesWaiters;	// 44 = 0x2c
	NSMutableSet *_waiterIDsExpectingNotesLock;	// 48 = 0x30
	BOOL _claimedOwnershipOfBookmarks;	// 52 = 0x34
	id<DADataclassLockWatcher> _bookmarksLockHolder;	// 56 = 0x38
	NSMutableArray *_bookmarksWaiters;	// 60 = 0x3c
	NSMutableSet *_waiterIDsExpectingBookmarksLock;	// 64 = 0x40
}
+ (id)sharedGateKeeper;	// 0x20889
- (void)claimedOwnershipOfDataclasses:(int)dataclasses;	// 0x20ac9
- (id)stateString;	// 0x20a45
- (void)relinquishLocksForWaiter:(id)waiter dataclasses:(int)dataclasses moreComing:(BOOL)coming;	// 0x209c9
- (void)unregisterWaiterForDataclassLocks:(id)dataclassLocks;	// 0x2094d
- (void)registerWaiter:(id)waiter forDataclassLocks:(int)dataclassLocks completionHandler:(id)handler;	// 0x208d1
@end