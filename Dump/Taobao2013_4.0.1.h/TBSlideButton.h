//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

__attribute__((visibility("hidden")))
@interface TBSlideButton : UIButton
{
    struct CGPoint _touchBeginPoint;
    id <TBButtonSlideDelegate> _slideDelegate;
}

@property(nonatomic) id <TBButtonSlideDelegate> slideDelegate; // @synthesize slideDelegate=_slideDelegate;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

