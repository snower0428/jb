//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface DrawState : NSObject
{
    NSMutableArray *_lineArray;
    float _lineWidth;
    BOOL _clear;
    float _penScale;
}

@property(nonatomic) float penScale; // @synthesize penScale=_penScale;
@property(nonatomic) BOOL clear; // @synthesize clear=_clear;
@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSMutableArray *lineArray; // @synthesize lineArray=_lineArray;
- (void).cxx_destruct;
- (id)init;

@end

