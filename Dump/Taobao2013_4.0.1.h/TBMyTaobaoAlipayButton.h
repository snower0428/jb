//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, TBAlipayTodoService, TBMyTaobaoMainViewController, UIView;

__attribute__((visibility("hidden")))
@interface TBMyTaobaoAlipayButton : UIButton
{
    TBMyTaobaoMainViewController *_mainViewController;
    UIView *_badgeView;
    TBAlipayTodoService *_alipayTodoService;
    NSString *_alipayTodo;
}

+ (id)alipayButton:(id)arg1;
@property(retain, nonatomic) NSString *alipayTodo; // @synthesize alipayTodo=_alipayTodo;
@property(retain, nonatomic) TBAlipayTodoService *alipayTodoService; // @synthesize alipayTodoService=_alipayTodoService;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) TBMyTaobaoMainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
- (void).cxx_destruct;
- (void)loadAlipayData;
- (void)refreshInfo;
- (void)configViews;

@end

