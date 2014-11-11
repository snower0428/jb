//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IconParameters, NSMutableDictionary, NSString, UIView;

@interface WidgetItem : NSObject
{
    NSString *path;
    UIView *content;
    NSString *bundleID;
    NSMutableDictionary *posDict;
    int widgetType;
    struct CGPoint currentPT;
    int width;
    int height;
    IconParameters *parameter;
}

@property(nonatomic) int height; // @synthesize height;
@property(nonatomic) int width; // @synthesize width;
@property(nonatomic) int widgetType; // @synthesize widgetType;
@property(retain) NSMutableDictionary *posDict; // @synthesize posDict;
@property(retain) NSString *bundleID; // @synthesize bundleID;
@property(retain) UIView *content; // @synthesize content;
@property(retain) NSString *path; // @synthesize path;
- (id).cxx_construct;
- (void)dealloc;
- (id)getContent;
- (struct CGRect)getFrame;
- (id)callService:(id)arg1;
- (void)moveToOriginPosition;
- (void)setParentView:(id)arg1;
- (void)makeSize;
- (_Bool)isIconInPT:(struct CGPoint)arg1;
- (_Bool)containPT:(struct CGPoint)arg1;
- (void)endMove:(struct CGPoint)arg1;
- (void)layoutPoint:(struct CGPoint)arg1;
- (id)getCurrentIconListView;
- (void)addWidget:(id)arg1 withPos:(id)arg2;
- (void)savePoint:(struct CGPoint)arg1;
- (void)postWidgetAddNotify:(struct CGPoint)arg1;
- (void)moveTo:(struct CGPoint)arg1;
- (_Bool)create;
- (id)init;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;

@end
