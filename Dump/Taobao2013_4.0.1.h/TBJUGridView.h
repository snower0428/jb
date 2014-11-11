//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface TBJUGridView : UIView
{
    NSMutableArray *_itemViews;
    id <TBJUGridViewDelegate> _gridMenuViewDelegate;
    unsigned int _columnCount;
    int _topPadding;
    int _leftPadding;
    int _bottomPadding;
    int _yPadding;
    struct CGSize _itemSize;
}

@property(nonatomic) int yPadding; // @synthesize yPadding=_yPadding;
@property(nonatomic) int bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) int leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) int topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) unsigned int columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) id <TBJUGridViewDelegate> gridMenuViewDelegate; // @synthesize gridMenuViewDelegate=_gridMenuViewDelegate;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
- (void).cxx_destruct;
- (struct CGSize)contentSize;
- (void)reloadData;
- (void)itemPressed:(id)arg1;
- (void)setupItemViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
