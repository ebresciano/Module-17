//
//  Song.h
//  PlaylistOBJTc
//
//  Created by Eva Marie Bresciano on 5/31/16.
//  Copyright © 2016 Eva Bresciano. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Song : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;

-(instancetype)initWithTitle:(NSString *)title artist: (NSString *)artist;

@end
