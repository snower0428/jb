//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, UIScrollView, UIView;

@interface PHWidgetMgrController : NSObject
{
    UIView *contentView;
    UIView *firstScreen;
    UIScrollView *scrollView;
    id <NSObject> service;
    id <PHController> controller;
    NSMutableDictionary *eventBundles;
}

+ (id)shareInstance;
@property(retain) id <NSObject> service; // @synthesize service;
@property(retain) UIView *firstScreen; // @synthesize firstScreen;
@property(retain) UIScrollView *scrollView; // @synthesize scrollView;
@property(retain) UIView *contentView; // @synthesize contentView;
- (void)dealloc;
- (void)createDockForIOS7;
- (void)removAppeFromWhiteList;
- (void)orientationLock:(_Bool)arg1;
- (void)postScreenUnlock;
- (void)postHomeButtonDoubleClicked;
- (void)postHomeButtonClicked;
- (void)postIconEdit:(_Bool)arg1;
- (void)postApplicationExit;
- (void)postScrollviewPageChanged;
- (void)sendScrollviewToback:(id)arg1;
- (void)loadWidgetMgr;
- (_Bool)isWidgetManagerExist;
- (void)setContentView:(id)arg1 scroll:(id)arg2 firstScreen:(id)arg3 service:(id)arg4;
- (id)init;
- (void)receivedMemoryNotify:(id)arg1;

@end
