//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, NSURL;

@interface DMVideoModel : NSObject
{
    BOOL _autoClose;
    BOOL _detailPreload;
    int _impMin;
    float _autoCloseDelay;
    NSString *_detail;
    NSDictionary *_dictUI;
    NSURL *_urlPath;
}

@property(retain, nonatomic) NSURL *urlPath; // @synthesize urlPath=_urlPath;
@property(retain, nonatomic) NSDictionary *dictUI; // @synthesize dictUI=_dictUI;
@property(nonatomic) BOOL detailPreload; // @synthesize detailPreload=_detailPreload;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(nonatomic) float autoCloseDelay; // @synthesize autoCloseDelay=_autoCloseDelay;
@property(nonatomic) BOOL autoClose; // @synthesize autoClose=_autoClose;
@property(nonatomic) int impMin; // @synthesize impMin=_impMin;
- (void)dealloc;
- (id)init;

@end
