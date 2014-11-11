//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSMutableArray, UIColor, UIImageView;

@interface TBSNSAccountCardView : UIScrollView
{
    BOOL _separator;
    UIColor *_itemBackgroundColor;
    id <TBSNSAccountCardViewDelegate> _menuDelegate;
    UIImageView *_backgroundImageView;
    NSMutableArray *_itemViews;
    unsigned int _columnCount;
    int _topPadding;
    int _leftPadding;
    int _bottomPadding;
    int _yPadding;
    unsigned int _autoSizeRow;
    UIColor *_separatorColor;
    struct CGSize _itemSize;
}

@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) BOOL separator; // @synthesize separator=_separator;
@property(nonatomic) unsigned int autoSizeMAXRow; // @synthesize autoSizeMAXRow=_autoSizeRow;
@property(nonatomic) int yPadding; // @synthesize yPadding=_yPadding;
@property(nonatomic) int bottomPadding; // @synthesize bottomPadding=_bottomPadding;
@property(nonatomic) int leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) int topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) unsigned int columnCount; // @synthesize columnCount=_columnCount;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) id <TBSNSAccountCardViewDelegate> menuDelegate; // @synthesize menuDelegate=_menuDelegate;
@property(retain, nonatomic) UIColor *itemBackgroundColor; // @synthesize itemBackgroundColor=_itemBackgroundColor;
- (void).cxx_destruct;
- (id)cardItemAtIndex:(int)arg1;
- (id)cardItemView;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)contentSize;
- (void)setMenuViewSeparator;
- (void)setupBackgroundImageView;
- (void)setupItemViewsWithGroupCellIndexPath:(id)arg1;
- (void)reloadDataWithGroupCellIndexPath:(id)arg1;
- (void)reloadData;
- (void)itemPressedUpOutsideAction:(id)arg1;
- (void)itemPressedDown:(id)arg1;
- (void)itemPressed:(id)arg1;
- (void)setupItemViews;
- (void)initBackground;
- (void)setupView;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
