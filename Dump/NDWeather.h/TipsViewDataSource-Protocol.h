//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, TipsView, UIImage;

@protocol TipsViewDataSource
- (struct CGRect)buttonFrame:(TipsView *)arg1;
- (struct CGRect)contentFrame:(TipsView *)arg1;
- (struct CGRect)titleFrame:(TipsView *)arg1;
- (struct CGRect)imageFrame:(TipsView *)arg1;
- (NSString *)buttonTitle:(TipsView *)arg1;
- (NSString *)content:(TipsView *)arg1;
- (NSString *)title:(TipsView *)arg1;
- (UIImage *)image:(TipsView *)arg1;
@end
