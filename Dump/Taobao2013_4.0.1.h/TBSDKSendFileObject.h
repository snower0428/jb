//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface TBSDKSendFileObject : NSObject
{
    NSData *_fileData;
    NSString *_httpKey;
    NSString *_fileName;
}

@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *httpKey; // @synthesize httpKey=_httpKey;
@property(retain, nonatomic) NSData *fileData; // @synthesize fileData=_fileData;
- (void).cxx_destruct;

@end
