//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView, UIPanGestureRecognizer;

@interface IGSegmentedControl : UIView
{
    NSArray *_buttons;
    int _selectedIndex;
    id <IGSegmentedControlDelegate> _delegate;
    UIImageView *_bgView;
    UIImageView *_selectionView;
    UIPanGestureRecognizer *_panRecognizer;
    int _style;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) UIImageView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak id <IGSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)moveSelectionViewAnimated:(BOOL)arg1;
- (void)onSegmentTapped:(id)arg1;
- (void)panGesture:(id)arg1;
- (void)setSelectedIndex:(int)arg1 animated:(BOOL)arg2;
- (void)setImages:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end
