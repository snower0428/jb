//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface TBSNSInsetsLabel : UILabel
{
    struct UIEdgeInsets _insets;
}

@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andInsets:(struct UIEdgeInsets)arg2;

@end

