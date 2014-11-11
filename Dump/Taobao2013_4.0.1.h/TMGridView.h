//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, UITableView, UIView;

@interface TMGridView : UIScrollView <UITableViewDataSource, UITableViewDelegate>
{
    id <TMGridViewDataSource> _dataSource;
    float _rowSpace;
    float _columnSpace;
    UIView *_backgroundView;
    UITableView *_tableView;
    NSMutableArray *_columns;
    NSMutableDictionary *_frames;
    struct UIEdgeInsets _paddingEdge;
}

@property(retain, nonatomic) NSMutableDictionary *frames; // @synthesize frames=_frames;
@property(retain, nonatomic) NSMutableArray *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) struct UIEdgeInsets paddingEdge; // @synthesize paddingEdge=_paddingEdge;
@property(nonatomic) float columnSpace; // @synthesize columnSpace=_columnSpace;
@property(nonatomic) float rowSpace; // @synthesize rowSpace=_rowSpace;
@property(nonatomic) id <TMGridViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)gridViewDidSelectedItem:(id)arg1;
- (void)reloadData;
- (id)dequeueReusableItemWithIdentifier:(id)arg1 atColIndex:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
@property(nonatomic) id <TMGridViewDelegate> delegate;
- (id)initWithFrame:(struct CGRect)arg1;

@end
