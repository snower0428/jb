//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, TBMyTaobaoMainViewController;

__attribute__((visibility("hidden")))
@interface TBMyTaobaoFunctionView : UIView
{
    NSMutableArray *_functionserviceArray;
    TBMyTaobaoMainViewController *_mainViewController;
}

+ (id)shareInstance:(id)arg1;
@property(retain, nonatomic) TBMyTaobaoMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) NSMutableArray *functionserviceArray; // @synthesize functionserviceArray=_functionserviceArray;
- (void).cxx_destruct;
- (void)free;
- (void)setUILabel:(id)arg1 cgRect:(struct CGRect)arg2 originY:(float)arg3;
- (void)reSetDesc:(id)arg1 uiLabelTag:(int)arg2 cgRect:(struct CGRect)arg3 originY:(float)arg4;
- (void)loadFamilyNumberData:(id)arg1 uiLabelTag:(int)arg2 cgRect:(struct CGRect)arg3 originY:(float)arg4;
- (id)functionservice;
- (void)configViews;
- (float)calculateCellHeight;

@end
