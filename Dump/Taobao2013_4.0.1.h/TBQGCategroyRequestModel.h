//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TBQGCategroyRequestModel : TBSDKRequestModel
{
    NSMutableArray *_categoryDataArray;
}

@property(retain, nonatomic) NSMutableArray *categoryDataArray; // @synthesize categoryDataArray=_categoryDataArray;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)loadCategroyInfo;

@end

