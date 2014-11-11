//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LQViewFactory.h"

@class LQOperationQueue, NSMutableDictionary;

@interface LQCTLabelFactory : LQViewFactory
{
    LQOperationQueue *_queue;
    NSMutableDictionary *_frameSetterDic;
}

+ (float)heightOfDescriptionLabelWithText:(id)arg1;
+ (float)heightOfNewsLabelWithText:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *frameSetterDic; // @synthesize frameSetterDic=_frameSetterDic;
@property(retain, nonatomic) LQOperationQueue *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)dealloc;
- (id)createDescriptionLabel;
- (id)createLabel;

@end
