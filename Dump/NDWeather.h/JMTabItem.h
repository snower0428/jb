//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface JMTabItem : UIButton
{
    NSString *title_;
    UIImage *icon_;
    float fixedWidth_;
    CDUnknownBlockType executeBlock_;
}

+ (id)tabItemWithTitle:(id)arg1 icon:(id)arg2 executeBlock:(CDUnknownBlockType)arg3;
+ (id)tabItemWithFixedWidth:(float)arg1;
+ (id)tabItemWithTitle:(id)arg1 icon:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType executeBlock; // @synthesize executeBlock=executeBlock_;
@property(nonatomic) float fixedWidth; // @synthesize fixedWidth=fixedWidth_;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=icon_;
@property(retain, nonatomic) NSString *title; // @synthesize title=title_;
- (void)itemTapped:(id)arg1;
- (BOOL)isSelectedTabItem;
- (void)setHighlighted:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 icon:(id)arg2;
- (void)dealloc;

@end
