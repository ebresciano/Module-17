//
//  PlaylistController.h
//  PlaylistOBJTc
//
//  Created by Eva Marie Bresciano on 5/31/16.
//  Copyright © 2016 Eva Bresciano. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Playlist.h"
#import "Song.h"

@interface PlaylistController : NSObject

@property (strong, nonatomic) NSMutableArray *playlists;

-(void)createPlaylistWithName: (NSString *)name;
-(void)deletePlaylist: (Playlist *)playlist;
-(void)addSongWithTitle: (NSString *)title andArtist:(NSString *)artist toPLaylist: (Playlist *)playlist;
-(void)deleteSong: (Song *)song fromPLaylist:(Playlist *)playlist;

+(PlaylistController *)sharedInstance;

-(instancetype)init;

@end
