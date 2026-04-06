import pygal.maps.world # pyright: ignore[reportMissingImports]

# Crie um mapa mundi
mapa_mundi = pygal.maps.world.World()

# Defina o título do mapa
mapa_mundi.title = 'População Mundial por País'

# Adicione dados ao mapa
mapa_mundi.add('Ásia', {'cn': 1376049000, 'in': 1293859294, 'jp': 126573481, 'bd': 152408774})
mapa_mundi.add('África', {'ng': 206139587, 'eg': 102334404, 'et': 114963588, 'za': 59622350})
mapa_mundi.add('Europa', {'ru': 144526636, 'de': 83783942, 'gb': 67886011, 'fr': 65273511})
mapa_mundi.add('América do Norte', {'us': 331449281, 'mx': 127318112, 'ca': 37742154})
mapa_mundi.add('América do Sul', {'br': 213993437, 'ar': 45376763, 'co': 50882884})

# Renderize o mapa
mapa_mundi.render_to_file('populacao_mundial.svg')