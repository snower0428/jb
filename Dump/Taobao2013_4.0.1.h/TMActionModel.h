//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, NSURL;

@interface TMActionModel : NSObject
{
    NSString *_urlString;
    id _urlInstance;
    NSURL *_urlLink;
    NSDictionary *_params;
    NSArray *_paths;
}

@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSURL *urlLink; // @synthesize urlLink=_urlLink;
@property(retain, nonatomic) id urlInstance; // @synthesize urlInstance=_urlInstance;
@property(copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (int)schemeType;
- (id)parserPaths;
- (id)parserParams;
- (id)query;
- (id)fragment;
- (id)path;
- (id)port;
- (id)host;
- (id)user;
- (id)scheme;
- (void)dealloc;
- (id)initWithUrl:(id)arg1;

@end
