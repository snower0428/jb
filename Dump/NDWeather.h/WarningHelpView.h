//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface WarningHelpView : UIView
{
    id <WarningHelpViewDataSource> delegate;
}

@property(nonatomic) id <WarningHelpViewDataSource> delegate; // @synthesize delegate;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (float)getWarningGuideHeight;
- (void)drawStandardAndGuide;
- (struct CGSize)getWarningGuideSize;
- (struct CGSize)getWarningStandardSize;

@end

