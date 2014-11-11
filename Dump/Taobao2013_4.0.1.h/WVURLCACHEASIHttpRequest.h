//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIHTTPRequest.h"

@class NSDictionary, NSString, NSURLRequest;

@interface WVURLCACHEASIHttpRequest : ASIHTTPRequest
{
    BOOL _isTrack;
    BOOL _isCache;
    BOOL _isPageRequest;
    NSString *_fileLocalPath;
    NSString *_fileUrl;
    int _fileLength;
    NSDictionary *_config;
    NSURLRequest *_sourceRequest;
}

@property(nonatomic) BOOL isPageRequest; // @synthesize isPageRequest=_isPageRequest;
@property(nonatomic) BOOL isCache; // @synthesize isCache=_isCache;
@property(nonatomic) BOOL isTrack; // @synthesize isTrack=_isTrack;
@property(retain, nonatomic) NSURLRequest *sourceRequest; // @synthesize sourceRequest=_sourceRequest;
@property(copy, nonatomic) NSDictionary *config; // @synthesize config=_config;
@property(nonatomic) int fileLength; // @synthesize fileLength=_fileLength;
@property(copy, nonatomic) NSString *fileUrl; // @synthesize fileUrl=_fileUrl;
@property(copy, nonatomic) NSString *fileLocalPath; // @synthesize fileLocalPath=_fileLocalPath;
- (void).cxx_destruct;

@end

