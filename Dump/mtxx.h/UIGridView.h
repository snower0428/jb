//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UIGridViewCell, UIView;

__attribute__((visibility("hidden")))
@interface UIGridView : UITableView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    id <UIGridViewDelegate> _preTargetDelegate;
    id <UIGridViewDataSource> _preTargetDataSource;
    UIGridViewCell *_reusableGridCell;
    BOOL _showSeparate;
    UIView *_gridHeaderView;
    UIView *_gridFooterView;
    struct CGSize _cellSize;
}

@property(nonatomic) BOOL showSeparate; // @synthesize showSeparate=_showSeparate;
@property(retain, nonatomic) UIView *gridFooterView; // @synthesize gridFooterView=_gridFooterView;
@property(retain, nonatomic) UIView *gridHeaderView; // @synthesize gridHeaderView=_gridHeaderView;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (void).cxx_destruct;
- (int)indexForCellAtColumn:(int)arg1 row:(int)arg2;
- (int)numberOfCellsPerColumn;
- (int)numberOfCellsPerRow;
- (struct CGPoint)originForCellAtIndex:(int)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)handleTapGestureRecognition:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)reloadCellsAtIndexPaths:(id)arg1;
- (void)deselectCellAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)cellAtIndexPath:(id)arg1;
- (id)dequeueReusableCell;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
- (void)initialize;

@end

