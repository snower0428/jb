//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface PeriodicitySelectView : UIView
{
    id <PeriodicitySelectViewDelegate> _delegate;
    int _selectedPeriodicityIndex;
}

@property(nonatomic) int selectedPeriodicityIndex; // @synthesize selectedPeriodicityIndex=_selectedPeriodicityIndex;
@property(nonatomic) id <PeriodicitySelectViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didPeriodicitySelect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 periodicInfo:(id)arg2;

@end
