/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/IUPlaylistDataSource.h>
#import <iPodUI/iPodUI-Structs.h>


@interface IUPlaylistsDataSource : IUPlaylistDataSource {
}
+ (id)queryCollectionPropertiesToFetch;	// 0x48421
+ (id)tabBarItemTitleKey;	// 0x47fb9
+ (id)tabBarItemIconName;	// 0x47fad
- (id)_otgActionRow;	// 0x48b51
- (id)_geniusActionRow;	// 0x48ab5
- (id)_newOnTheGoViewControllerContext;	// 0x489ed
- (id)_newGeniusNotEnabledViewControllerContext;	// 0x487c9
- (id)_newActiveGeniusViewControllerContext;	// 0x48701
- (id)_addPlaylistActionRow;	// 0x486d5
- (id)entitiesForQuery:(id)query;	// 0x48495
- (id)viewControllerContextForActionRow:(id)actionRow;	// 0x48325
- (id)prefixActionRows;	// 0x482f9
- (void)invalidate;	// 0x482cd
- (void)reloadActionRows;	// 0x48191
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;	// 0x4818d
- (int)initialVisibleIndex;	// 0x4817d
- (int)initialSelectedIndex;	// 0x48149
- (int)mediaDisclosureStyleForIndex:(unsigned)index;	// 0x480f9
- (id)cellConfigurationForIndex:(unsigned)index artworkLoadingCompletionHandler:(id)handler;	// 0x47ff1
- (Class)cellConfigurationClassForEntity:(id)entity;	// 0x47fd5
- (SEL)libraryHasDisplayableEntitiesSelector;	// 0x47fc5
@end