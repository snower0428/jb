//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TBMPNavigationController : UINavigationController
{
    NSMutableArray *_photos;
    CDStruct_3d22b96e *_imageRule;
    NSMutableArray *_curAssetsGroup;
    int _iSelectGroupIndex;
    CDUnknownBlockType _ResultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType ResultBlock; // @synthesize ResultBlock=_ResultBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancelSelect;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithInitPhotos:(id)arg1 rootViewController:(id)arg2 withImageRule:(CDStruct_3d22b96e *)arg3;

@end
