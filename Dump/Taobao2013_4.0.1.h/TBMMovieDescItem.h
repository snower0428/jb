//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseRowItem.h"

@class NSString;

@interface TBMMovieDescItem : TBMBaseRowItem
{
    BOOL _opened;
    BOOL _canOpen;
    NSString *_movieDesc;
    NSString *_closedMovieDesc;
    float _openRowHight;
}

@property(nonatomic) BOOL canOpen; // @synthesize canOpen=_canOpen;
@property(nonatomic) float openRowHight; // @synthesize openRowHight=_openRowHight;
@property(retain, nonatomic) NSString *closedMovieDesc; // @synthesize closedMovieDesc=_closedMovieDesc;
@property(retain, nonatomic) NSString *movieDesc; // @synthesize movieDesc=_movieDesc;
@property(nonatomic) BOOL opened; // @synthesize opened=_opened;
- (void)dealloc;

@end
