/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "MADataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MAAutoNaviSADataSource : XXUnknownSuperclass <MADataSource> {
@private
	int mapLanguage;
	int minZoomLevel;
	int maxZoomLevel;
	int tileSize;
}
@property(assign, nonatomic) int mapLanguage;
@property(assign, nonatomic) int tileSize;
@property(assign, nonatomic) int maxZoomLevel;
@property(assign, nonatomic) int minZoomLevel;
-(id)tileData:(XXStruct_peQPEB)data;
-(id)tileURL:(XXStruct_peQPEB)url;
-(id)init;
@end

