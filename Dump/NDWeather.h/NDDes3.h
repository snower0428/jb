//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NDDes3 : NSObject
{
}

+ (id)createRandomDes3Key;
+ (id)createDes3DecryptData:(id)arg1 keyData:(id)arg2 initVectorData:(id)arg3 error:(int *)arg4;
+ (id)createDes3EncryptData:(id)arg1 keyData:(id)arg2 initVectorData:(id)arg3 error:(int *)arg4;
+ (id)createDes3Data:(id)arg1 keyData:(id)arg2 initVectorData:(id)arg3 operation:(unsigned int)arg4 error:(int *)arg5;

@end

