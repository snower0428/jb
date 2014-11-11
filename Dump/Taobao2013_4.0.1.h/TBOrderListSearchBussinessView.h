//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UISearchBarDelegate.h"

@class TBSearchBar, UIButton;

@interface TBOrderListSearchBussinessView : UIView <UISearchBarDelegate>
{
    BOOL _isSearching;
    TBSearchBar *_searchBar;
    UIButton *_transparentLayerButton;
    id <TBOrderListSearchBussinessViewDelegate> _delegate;
    UIView *_searchBarBackground;
}

@property(retain, nonatomic) UIView *searchBarBackground; // @synthesize searchBarBackground=_searchBarBackground;
@property(nonatomic) id <TBOrderListSearchBussinessViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *transparentLayerButton; // @synthesize transparentLayerButton=_transparentLayerButton;
@property(retain, nonatomic) TBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)optionMenuButtonClicked;
- (void)showSearchBarBackground:(BOOL)arg1;
- (void)addTransparentLayerButton;
- (void)keyboardWillShow:(id)arg1;
- (void)cancelObservingForKeyboardNotification;
- (void)observeForKeybordShowNotification;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
