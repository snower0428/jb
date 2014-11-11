//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MTPopoverFilterView, NSArray, UIButton;

@interface MTFiltersViewController : UIViewController
{
    NSArray *_currentFilterArray;
    int _selectIndex;
    BOOL _aroundFilters;
    UIButton *_filterButton;
    MTPopoverFilterView *_filterSelectionView;
    id <MTFiltersViewDelegate> _filtersViewDelegate;
}

@property(nonatomic, getter=isAroundFilters) BOOL aroundFilters; // @synthesize aroundFilters=_aroundFilters;
@property(nonatomic) __weak id <MTFiltersViewDelegate> filtersViewDelegate; // @synthesize filtersViewDelegate=_filtersViewDelegate;
@property(retain, nonatomic) MTPopoverFilterView *filterSelectionView; // @synthesize filterSelectionView=_filterSelectionView;
@property(retain, nonatomic) NSArray *currentFilterArray; // @synthesize currentFilterArray=_currentFilterArray;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
@property(nonatomic) int selectIndex; // @synthesize selectIndex=_selectIndex;
- (void).cxx_destruct;
- (void)clearFilterInfo;
- (void)showFilterView;
- (void)resetFilter;
- (void)viewDidLoad;

@end

