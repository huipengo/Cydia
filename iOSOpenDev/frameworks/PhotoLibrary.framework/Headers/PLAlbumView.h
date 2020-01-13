/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/UITableViewDataSource.h>
#import <PhotoLibrary/UITableViewDelegate.h>
#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <PhotoLibrary/PLPhotosPickerSessionParticipant.h>
#import <PhotoLibrary/UIGestureRecognizerDelegate.h>
#import <PhotoLibrary/XXUnknownSuperclass.h>

@class PLAutoScroller, UITapGestureRecognizer, PLPhotosPickerSession, UITableView, UIView, PLSyncProgressView, PLAlbumSelectionControlsView, UIGestureRecognizer, NSIndexSet, PLAlbumItemCountView, NSMutableIndexSet, UILongPressGestureRecognizer;
@protocol PLAlbumViewDataSource, PLAlbumViewDelegate;

@interface PLAlbumView : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, PLPhotosPickerSessionParticipant> {
	unsigned _photoCount;	// 48 = 0x30
	unsigned _columnsPerRow;	// 52 = 0x34
	CGPoint _previousContentOffset;	// 56 = 0x38
	float _previousOffsetRatio;	// 64 = 0x40
	UITableView *_tableView;	// 68 = 0x44
	unsigned _tableViewRowCount;	// 72 = 0x48
	id<PLAlbumViewDataSource> _dataSource;	// 76 = 0x4c
	int _selectionStyle;	// 80 = 0x50
	PLPhotosPickerSession *_currentPickerSession;	// 84 = 0x54
	UITapGestureRecognizer *_tapRecognizer;	// 88 = 0x58
	UIGestureRecognizer *_tapFailedRecognizer;	// 92 = 0x5c
	unsigned _photoIndexToBeSelected;	// 96 = 0x60
	BOOL _allowsSelectionGestures;	// 100 = 0x64
	NSMutableIndexSet *_pendingPhotoReloadIndexes;	// 104 = 0x68
	NSMutableIndexSet *_pendingPhotoRemoveIndexes;	// 108 = 0x6c
	NSMutableIndexSet *_pendingPhotoInsertIndexes;	// 112 = 0x70
	unsigned _pendingUpdates;	// 116 = 0x74
	PLAlbumItemCountView *_imageCountView;	// 120 = 0x78
	PLSyncProgressView *_syncProgressView;	// 124 = 0x7c
	PLAlbumSelectionControlsView *_selectionControlsView;	// 128 = 0x80
	id<PLAlbumViewDelegate> _delegate;	// 132 = 0x84
	NSMutableIndexSet *_selectedPhotoIndexes;	// 136 = 0x88
	NSMutableIndexSet *_badgedPhotoIndexes;	// 140 = 0x8c
	NSMutableIndexSet *_activityIndexes;	// 144 = 0x90
	UILongPressGestureRecognizer *_longPressRecognizer;	// 148 = 0x94
	unsigned _calloutBarSelectionIndex;	// 152 = 0x98
	BOOL _swipeSelection;	// 156 = 0x9c
	UIView *_draggedItemView;	// 160 = 0xa0
	CGSize _draggedItemOffset;	// 164 = 0xa4
	unsigned _dragItemCurrentPhotoIndex;	// 172 = 0xac
	PLAutoScroller *_autoscroller;	// 176 = 0xb0
	struct {
		unsigned displayTextBadges : 1;
		unsigned canShowCopyCallout : 1;
		unsigned usesViewBasedCells : 1;
		unsigned allowsReordering : 1;
		unsigned delegateCanSelect : 1;
		unsigned delegateSelectionDidChange : 1;
		unsigned delegateDidTapPhoto : 1;
		unsigned delegatePreheatImageData : 1;
		unsigned delegateShouldShowPhotoCount : 1;
	} _albumViewFlags;	// 180 = 0xb4
}
@property(retain, nonatomic) PLPhotosPickerSession *currentPickerSession;	// G=0xada95; S=0xb091; @synthesize=_currentPickerSession
@property(readonly, assign, nonatomic) unsigned calloutPhotoIndex;	// G=0xac0e9; 
@property(assign, nonatomic) id<PLAlbumViewDelegate> delegate;	// G=0xe5b1; S=0xa865; 
@property(assign, nonatomic) id<PLAlbumViewDataSource> dataSource;	// G=0xa0f5; S=0xa979; @synthesize=_dataSource
@property(assign, nonatomic) float bottomInset;	// G=0xa45d; S=0xac025; 
@property(assign, nonatomic) BOOL canShowCopyCallout;	// G=0xac011; S=0x9fa9; 
@property(assign, nonatomic) BOOL displaysTextBadges;	// G=0xdb31; S=0xaf99; 
@property(assign, nonatomic) BOOL allowsReordering;	// G=0xabffd; S=0x2ef55; 
@property(assign, nonatomic) BOOL usesViewBasedCells;	// G=0xabed1; S=0xabee5; 
@property(copy, nonatomic) NSIndexSet *activityIndexes;	// G=0xabcbd; S=0xabcf5; 
@property(copy, nonatomic) NSIndexSet *badgedPhotoIndexes;	// G=0xab979; S=0xab9b1; 
@property(copy, nonatomic) NSIndexSet *selectedPhotoIndexes;	// G=0x2df8d; S=0xadc1; 
@property(assign, nonatomic) BOOL allowsSelectionGestures;	// G=0xe335; S=0x9ff1; @synthesize=_allowsSelectionGestures
@property(assign, nonatomic) int photoSelectionStyle;	// G=0xccb1; S=0x9e39; 
@property(readonly, assign, nonatomic) unsigned photoCount;	// G=0xada85; @synthesize=_photoCount
@property(readonly, retain) UITableView *tableView;	// G=0xb279; converted property
// declared property getter: - (id)currentPickerSession;	// 0xada95
// declared property setter: - (void)setAllowsSelectionGestures:(BOOL)gestures;	// 0x9ff1
// declared property getter: - (BOOL)allowsSelectionGestures;	// 0xe335
// declared property setter: - (void)setDataSource:(id)source;	// 0xa979
// declared property getter: - (id)dataSource;	// 0xa0f5
// declared property getter: - (unsigned)photoCount;	// 0xada85
- (void)didMoveToWindow;	// 0xc9d9
- (void)_deselectAllPhotosNotifyingDelegate:(id)delegate;	// 0xad9d1
- (void)_selectAllPhotosNotifyingDelegate:(id)delegate;	// 0xad909
- (void)_updateSelectionControls;	// 0xaf25
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0xca81
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0xa659
- (void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;	// 0xad889
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0xad7c9
// declared property setter: - (void)setCurrentPickerSession:(id)session;	// 0xb091
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0xe681
- (void)_selectAfterDelay;	// 0xad791
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0xe125
- (void)_longPressGesture:(id)gesture;	// 0xad471
- (BOOL)_dragMove:(id)move;	// 0xac44d
- (void)_tapFailedGesture:(id)gesture;	// 0xac3c5
- (void)_tapGesture:(id)gesture;	// 0xe699
- (void)_updateInstalledGestureRecognizers;	// 0xaa8d
- (void)menuDidHideNotification:(id)menu;	// 0xac351
- (void)rotationDidStart;	// 0xac1fd
- (void)rotationWillStart;	// 0xac0f9
// declared property getter: - (unsigned)calloutPhotoIndex;	// 0xac0e9
// converted property getter: - (id)tableView;	// 0xb279
// declared property getter: - (float)bottomInset;	// 0xa45d
// declared property setter: - (void)setBottomInset:(float)inset;	// 0xac025
// declared property getter: - (BOOL)canShowCopyCallout;	// 0xac011
// declared property setter: - (void)setCanShowCopyCallout:(BOOL)callout;	// 0x9fa9
// declared property getter: - (BOOL)displaysTextBadges;	// 0xdb31
// declared property setter: - (void)setDisplaysTextBadges:(BOOL)badges;	// 0xaf99
// declared property setter: - (void)setAllowsReordering:(BOOL)reordering;	// 0x2ef55
// declared property getter: - (BOOL)allowsReordering;	// 0xabffd
// declared property setter: - (void)setUsesViewBasedCells:(BOOL)cells;	// 0xabee5
// declared property getter: - (BOOL)usesViewBasedCells;	// 0xabed1
- (void)hideActivityOnPhotoAtIndex:(unsigned)index;	// 0xabe89
- (void)showActivityOnPhotoAtIndex:(unsigned)index;	// 0xabe41
// declared property setter: - (void)setActivityIndexes:(id)indexes;	// 0xabcf5
// declared property getter: - (id)activityIndexes;	// 0xabcbd
- (void)_changeActivityStateOfPhotoAtIndex:(unsigned)index;	// 0xabb8d
- (void)debadgePhotoAtIndex:(unsigned)index;	// 0xabb45
- (void)badgePhotoAtIndex:(unsigned)index;	// 0xabafd
// declared property setter: - (void)setBadgedPhotoIndexes:(id)indexes;	// 0xab9b1
// declared property getter: - (id)badgedPhotoIndexes;	// 0xab979
- (void)_changeBadgeStateOfPhotoAtIndex:(unsigned)index;	// 0xab849
- (void)toggleSelectAll:(id)all;	// 0xab7bd
- (void)clearSelection;	// 0xab781
- (void)deselectPhotoAtIndex:(unsigned)index;	// 0xe625
- (void)selectPhotoAtIndex:(unsigned)index;	// 0xab739
// declared property setter: - (void)setSelectedPhotoIndexes:(id)indexes;	// 0xadc1
// declared property getter: - (id)selectedPhotoIndexes;	// 0x2df8d
- (unsigned)selectedPhotoIndex;	// 0xe581
// declared property setter: - (void)setPhotoSelectionStyle:(int)style;	// 0x9e39
// declared property getter: - (int)photoSelectionStyle;	// 0xccb1
- (void)_changeSelectionOfPhotoAtPoint:(CGPoint)point notifyDelegate:(BOOL)delegate;	// 0xab6fd
- (unsigned)_photoIndexAtPoint:(CGPoint)point;	// 0xe345
- (void)_changeSelectionOfPhotoAtIndex:(unsigned)index notifyDelegate:(BOOL)delegate;	// 0xe7ed
- (void)scrollToBottom:(BOOL)bottom;	// 0xab6dd
- (void)scrollToVisibleItemAtIndex:(unsigned)index animated:(BOOL)animated;	// 0x2c3b1
- (BOOL)isPhotoVisibleAtIndex:(unsigned)index;	// 0xab675
- (void)_processPendingUpdates;	// 0xaab41
- (void)endUpdates;	// 0xaaa7d
- (void)beginUpdates;	// 0xaaa69
- (void)removePhotosAtIndexes:(id)indexes;	// 0xaa959
- (void)removePhotoAtIndex:(unsigned)index;	// 0xaa8f5
- (void)insertPhotosAtIndexes:(id)indexes;	// 0xaa7e5
- (void)insertPhotoAtIndex:(unsigned)index;	// 0xaa781
- (void)reloadPhotoAtIndex:(unsigned)index;	// 0xaa6f9
- (void)reloadData;	// 0xa001
// declared property setter: - (void)setDelegate:(id)delegate;	// 0xa865
// declared property getter: - (id)delegate;	// 0xe5b1
- (void)setFrame:(CGRect)frame;	// 0x9d85
- (void)dealloc;	// 0x2f261
- (void)drawRect:(CGRect)rect;	// 0xdee9
- (id)initWithFrame:(CGRect)frame;	// 0x9c99
- (BOOL)canBecomeFirstResponder;	// 0xaa6f5
- (void)_updateTableCell:(id)cell photoStartIndex:(unsigned)index;	// 0xccd1
- (int)_firstPhotoIndexForRowIndexPath:(id)rowIndexPath;	// 0xc745
- (unsigned)_cellPhotoIndexForPhotoIndex:(unsigned)photoIndex;	// 0xead5
- (unsigned)_tableRowForPhotoIndex:(unsigned)photoIndex;	// 0xea99
- (void)_preheatImageDataForDownwardScroll:(BOOL)downwardScroll;	// 0xa6f9
- (void)_setupTableView;	// 0xa4ed
- (void)_updateTableViewRowCount;	// 0xa105
- (void)_updateFooterView;	// 0xa165
- (void)_updatePhotoCount;	// 0xa0a5
- (void)_updateColumnsPerRow;	// 0x9dcd
- (unsigned)_leftPaddingForCellWidth:(float)cellWidth;	// 0xd0fd
- (CGSize)_cellSize;	// 0xa4a5
@end