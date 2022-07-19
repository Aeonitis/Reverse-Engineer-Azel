# Video
> Mostly sourced from [Gamicus](https://gamicus.fandom.com/wiki/Saturn)

The Saturn is equipped with dual custom VDP chips for graphics processing. The VDP1 chip is primarily responsible for sprite generation. Polygon generation is accomplished through manipulation of the sprite engine. Texture mapping and Gouraud shading are also handled by the VDP1.

The VDP1 renders primitives to two 256 kB frame buffers that is most commonly configured as 512x256x16 with a 320x240 visible area. For medium and high-resolution games, a 1024x256x8 frame buffer is used. Games running at 30 frames/s, like Virtua Fighter Remix and Die Hard Arcade, this gives a visible area of 640x240. For games running at 60 frames/s, like Virtua Fighter 2 and Dead or Alive, taking advantage of interlacing allows the two frame buffers to be combined with an effective size of 1024x512 per frame, with a visible area of 640x480. Having two separate frame buffers allows double buffering of the display and provides more time for rendering. The active framebuffer is read out to the display by the VDP2, which can apply data from a coefficient table to modify the scanning process, for effects like rotation, scaling, and general distortion of the entire frame buffer as a single entity.

The SCU (system bus control unit) provides DMA across a dedicated bus commonly labelled as the "B-bus" that the VDP2 and VDP1 are connected to, allowing transfer of data from them to and from main memory. Keep note that transferring data from and to the same bus is prohibited by all 3 SCU DMA levels.

Rendering engine for command tables: textured and non-textured polygons, untextured "polygons," "polylines," and lines along with command tables that control the frame buffer.
"Sprites" are textured polygons with specific rendering modes:
Normal sprite (one point), shrunk/scaled sprite (two points), distorted sprite (four points)
Other rendering modes:
Overwrite (replace frame buffer contents)
Shadow (underlying frame buffer pixels are rewritten with 1/2 brightness, primitive not drawn)
Half luminosity (primitive rendered with 1/2 brightness)
Half transparency (primitive and underlying framebuffer pixels averaged together)
Gouraud shading for RGB-format textures only
Dual 256 KiB frame buffers
Programmable frame buffer depth of 8 or 16 bits per pixel
Automatic erase feature to clear framebuffer with single colour
Some commonly quoted specifications are highly dependent on the rendering modes for the polygons and other factors that burden the system load:

- 200,000 texture-mapped polygons per second
- 500,000 flat-shaded polygons per second
- 60 frames of animation per second
- VDP1 memory is split: 512 kB for texture data / command lists, 256 kB for one frame buffer and 256 kB for another. Because of the split, it is not possible to use the frame buffer as a texture.
- The VDP1 has no texture cache, but since texture memory and the frame buffer have separate buses and can be accessed simultaneously, there isn't a speed penalty.
- The two frame buffers have a high-speed auto-erase feature.
- Commands are stored in a linked list in RAM, multiple lists can be stored, the list can be processed by the VDP1 without wasting a DMA channel.
- The VDP 2 serves as the Sega Saturn's background processor. Certain special effects such as texture transparency and playfield rotation and scrolling (up to five fields at any given time) are handled here.

Both the VDP2 and VDP1 32-bit video display processor has direct access to the both SH-2s, as well as direct memory access (DMA) to both the main and video RAM.

- Background engine
- Four simultaneous scrolling backgrounds
- Uses 8x8 or 16x16 tiles or bitmap display per background
- Programmable memory access controller for VDP2 VRAM
- Two simultaneous rotating play-fields
- VDP2 can rotate VDP1 framebuffer position while scanning out to display for rotation effects
- Color RAM supports 15-bit (32768 colors) and 24-bit (16.7 million colors) display modes
- Programmable priority at the per-background / per-tile / per-pixel levels
- Background color tinting/fading, and transparency effects
- Background blur effect (gradation) to simulate distance


Programmable display resolution:

- Horizontal sizes of 320, 352, 640, 704 pixels
- Vertical sizes of 224, 240, 256 scanlines, non-interlaced
- Vertical sizes of 448, 480, 512 scanlines, interlaced (only PAL consoles support 256 and 512 scanline displays)
- Hi-Vision (EDTV) and 31 kHz (VGA) display support:
- 31 kHz: 320×480 or 640×480, non-interlaced (progressive scan)
- Hi-Vision: 352×480 or 704×480, non-interlaced (progressive scan)

Additional Info:
https://segaxtreme.net/threads/mad-video-codec-source-code-released-for-sega-saturn.24825
https://wiki.multimedia.cx/index.php/BRP