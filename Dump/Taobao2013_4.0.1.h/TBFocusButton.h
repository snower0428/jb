//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, TBLoadingView;

__attribute__((visibility("hidden")))
@interface TBFocusButton : UIButton
{
    NSString *_snsID;
    int _index;
    TBLoadingView *_loadingView;
}

@property(retain, nonatomic) TBLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *snsID; // @synthesize snsID=_snsID;
- (void).cxx_destruct;

@end

