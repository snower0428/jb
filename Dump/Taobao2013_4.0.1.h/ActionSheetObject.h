//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIActionSheetDelegate.h"

@class NSArray, UIViewController;

__attribute__((visibility("hidden")))
@interface ActionSheetObject : NSObject <UIActionSheetDelegate>
{
    CDStruct_3d22b96e *_imageRule;
    UIViewController *_vc;
    NSArray *_photos;
    CDUnknownBlockType _resultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) UIViewController *vc; // @synthesize vc=_vc;
- (void).cxx_destruct;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)init;

@end
