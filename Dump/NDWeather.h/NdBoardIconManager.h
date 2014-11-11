//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdIconManagerBase.h"

@interface NdBoardIconManager : NdIconManagerBase
{
    unsigned int boardType;
}

+ (int)getBoardIcon:(id)arg1 boardType:(unsigned int)arg2 photoType:(unsigned int)arg3 checksum:(id)arg4 delegate:(id)arg5;
+ (id)imageForIcon3rdSNS:(unsigned int)arg1;
+ (id)singletonWithBoardType:(unsigned int)arg1;
+ (id)boardIconManagerOfVirtualGoods;
+ (id)boardIconManagerOfOtherPlatform;
+ (id)boardIconManagerOfAchievement;
+ (id)boardIconManagerOfLeaderBoard;
+ (id)boardIconManagerWithBoardType:(unsigned int)arg1 commIcon:(id)arg2 subDir:(id)arg3;
@property(nonatomic) unsigned int boardType; // @synthesize boardType;
- (void)serverOperationDidFinish:(id)arg1 error:(id)arg2;
- (id)downloadIconWithKey:(id)arg1 checksum:(id)arg2 iconType:(unsigned int)arg3;

@end
