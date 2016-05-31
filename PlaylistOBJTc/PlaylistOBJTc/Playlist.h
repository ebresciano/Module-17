//
//  Playlist.h
//  PlaylistOBJTc
//
//  Created by Eva Marie Bresciano on 5/31/16.
//  Copyright © 2016 Eva Bresciano. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Playlist : NSObject

@property (copy, nonatomic) NSString *name;
@property (strong, nonatomic) NSMutableArray  *songs;

-(instancetype)initWithName:(NSString *)name songs: (NSMutableArray *)songs;



@end
