//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

@class NSError;

@interface AFPropertyListRequestOperation : AFHTTPRequestOperation
{
    id _responsePropertyList;
    unsigned int _propertyListReadOptions;
    unsigned int _propertyListFormat;
    NSError *_propertyListError;
}

+ (BOOL)canProcessRequest:(id)arg1;
+ (id)acceptableContentTypes;
+ (id)propertyListRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSError *propertyListError; // @synthesize propertyListError=_propertyListError;
@property(nonatomic) unsigned int propertyListFormat; // @synthesize propertyListFormat=_propertyListFormat;
@property(nonatomic) unsigned int propertyListReadOptions; // @synthesize propertyListReadOptions=_propertyListReadOptions;
@property(retain, nonatomic) id responsePropertyList; // @synthesize responsePropertyList=_responsePropertyList;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)error;
- (id)initWithRequest:(id)arg1;

@end

