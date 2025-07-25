#define P(PATH) \x\strikeforcetalon_armory\addons\sft_music\music\##PATH
#define QP(PATH) #P(PATH)
#define GENRE_GLUE(GENRE) SFT(GENRE)
#define FILENAME_GLUE(FILENAME) SFT(FILENAME)

#define defineMusic(FILENAME, NAME, LENGTH, GENRE) \
class FILENAME_GLUE(FILENAME) \
{ \
  name = NAME; \
  sound[] = {QP(GENRE\FILENAME.ogg),1,1}; \
  theme = GENRE_GLUE(GENRE); \
  duration = LENGTH; \
  musicClass = GENRE_GLUE(GENRE); \
};