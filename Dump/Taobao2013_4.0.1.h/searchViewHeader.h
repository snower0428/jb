//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UISearchBarDelegate.h"

@class TBSearchBar, UIImageView;

@interface searchViewHeader : UIView <UISearchBarDelegate>
{
    TBSearchBar *_searchBar;
    id <searchViewHeaderDelegate> _delegate;
    UIImageView *_searchImageView;
    UIImageView *_searchBackgroundImageView;
}

+ (float)viewHeight;
@property(retain, nonatomic) UIImageView *searchBackgroundImageView; // @synthesize searchBackgroundImageView=_searchBackgroundImageView;
@property(retain, nonatomic) UIImageView *searchImageView; // @synthesize searchImageView=_searchImageView;
@property(nonatomic) id <searchViewHeaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)showSearchView:(BOOL)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end
