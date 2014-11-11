//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ASIHTTPRequest, NSString, NSURL;

@interface DownloadTask : NSObject
{
    BOOL _canDownload;
    BOOL _finished;
    BOOL _invalid;
    NSURL *_URL;
    ASIHTTPRequest *_request;
    id _userInfo;
    NSString *_sourceName;
}

@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
@property(nonatomic) BOOL invalid; // @synthesize invalid=_invalid;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) BOOL canDownload; // @synthesize canDownload=_canDownload;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) ASIHTTPRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;

@end

