//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TBNavigationSegmentControl : UIView
{
    int _selectedSegmentIndex;
    NSMutableArray *_buttons;
    id <TBNavigationSegmentControlDelegate> _delegate;
}

@property(nonatomic) id <TBNavigationSegmentControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *buttons; // @synthesize buttons=_buttons;
@property(nonatomic) int selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)changeState:(unsigned int)arg1 forButton:(id)arg2;
- (void)buttonTouchUpInside:(id)arg1;
- (id)initWithItems:(id)arg1;
- (void)dealloc;

@end
